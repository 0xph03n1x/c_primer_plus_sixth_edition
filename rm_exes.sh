#!/bin/bash
for dir in */; do
    cd "$dir"; ls | grep -v '\.' > rmf && echo "Removing (from $dir):" && cat rmf  && rm $(<rmf) && cd ..
done
