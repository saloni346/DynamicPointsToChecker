#!/bin/bash

cd build
for((i=1;i<=5;i++)) 
do
	echo "Test program "$i""
	./test"${i}"
done