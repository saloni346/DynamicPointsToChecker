#!/bin/bash

cp -v $2 $3
count=0
index=0
lineno=0
pointee=
first=0
prevlineno=0
sed -i '1i\#include <set>' $3 
sed -i '2i\#include <utility>' $3
sed -i '3i\#include "include/CheckPointee.h"' $3
sed -i '4i\#define GET_VARIABLE_NAME(Variable) (#Variable)' $3
#sed -i '5i\typedef pair<const char *, void *> pairs;' $3
sed -i '5i\set<pairs> s1;' $3

while read line
do 
	count=0
	for word in $line; do
		if [ "$count" -eq 0 ];
		then 
			lineno=$(($lineno + $(($word - $prevlineno))))
			count=$((count+1))
			if [ "$first" -eq 0 ]; 
			then 
				lineno=$((lineno+5)) 
				first=$((first+1))
			fi
			prevlineno=$word
		else
			
			len=${#word}
			for (( i=0;i<len;i++))
			do
				if [[ ${word:i+1:2} == ":{" ]]
				then
					index=$i
				fi
				pointer=${word:0:index+1}
			done
			index=$((index+3))
			lineno=$((lineno+1))
			sed -i "${lineno}i\cout<<\"At line no. ${prevlineno}  \";" $3
			for (( i=index;i<len;i++))
			do
				
				if [[ ${word:i:1} == "," ]] || [[ ${word:i:1} == "}" ]]
				then
					pointee=${word:index:i-index}
					index=$((i+1))
					lineno=$((lineno+1))
					sed -i "${lineno}i\s1.insert(make_pair((GET_VARIABLE_NAME(${pointee})), reinterpret_cast<void*>(&${pointee})));" $3
				fi
				
			done
			lineno=$((lineno + 1))	
			sed -i "${lineno}i\CheckPoint(reinterpret_cast<void*>(${pointer}), s1 , GET_VARIABLE_NAME(${pointer}));" $3
			lineno=$((lineno + 1))
			sed -i "${lineno}i\s1.clear();" $3	
		 fi
	
	done

done < $1
#g++ newfile.cpp && ./a.out




