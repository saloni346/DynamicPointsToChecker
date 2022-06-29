#!/bin/bash

inputfile="input.txt"
testfile="newfile.cpp"
cp -v test.cpp newfile.cpp
count=0
index=0
lineno=0
pointee=
first=0
prevlineno=0
sed -i '1i\#include <set>' $testfile 
sed -i '2i\#include <utility>' $testfile
sed -i '3i\#include "include/CheckPointee.h"' $testfile
sed -i '4i\#define GET_VARIABLE_NAME(Variable) (#Variable)' $testfile
sed -i '5i\typedef pair<const char *, int *> pairs;' $testfile
sed -i '6i\set<pairs> s1;' $testfile

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
				lineno=$((lineno+6)) 
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
			sed -i "${lineno}i\cout<<\"At line no. ${prevlineno}  \";" $testfile
			for (( i=index;i<len;i++))
			do
				
				if [[ ${word:i:1} == "," ]] || [[ ${word:i:1} == "}" ]]
				then
					pointee=${word:index:i-index}
					index=$((i+1))
					lineno=$((lineno+1))
					sed -i "${lineno}i\s1.insert(make_pair((GET_VARIABLE_NAME(${pointee})), &${pointee}));" $testfile
				fi
				
			done
			lineno=$((lineno + 1))	
			sed -i "${lineno}i\CheckPoint(${pointer}, s1 , GET_VARIABLE_NAME(${pointer}));" $testfile
			lineno=$((lineno + 1))
			sed -i "${lineno}i\s1.clear();" $testfile	
		 fi
	
	done

done < $inputfile
g++ newfile.cpp && ./a.out



