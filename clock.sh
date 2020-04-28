#!/bin/bash
while true; do
	read -t 1 TMP
	if [[ $TMP == "" ]]; then
		date +"%T"
	else
		break
	fi
done
echo "X"
