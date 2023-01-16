#!/bin/bash
for dir in */; do
    cd "$dir"; ls | grep -v '\.' > rmf && rm $(<rmf) && cd ..
done
