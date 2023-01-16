#!/bin/bash
for dir in */; do
    cd "$dir"; echo "Cleaning $dir"; ls | grep -v '\.' > rmf && echo "Removing:" && cat rmf && rm $(<rmf) && cd ..
done
