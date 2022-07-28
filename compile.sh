#!/bin/bash

for((i=1;i<=5;i++)) 
do
	./script.sh input"${i}".txt test"${i}".c newfile"${i}".cpp 
done
cd build && cmake .. && make 
for((i=1;i<=5;i++)) 
do
	echo "Test program "$i""
	./test"${i}"
done