#!/bin/bash

for((i=1;i<=3;i++)) 
do
	./script.sh input"${i}".txt test"${i}".c newfile"${i}".cpp 
done
cd build && cmake .. && make 
for((i=1;i<=3;i++)) 
do
	echo "Test case "$i""
	./test"${i}"
done