#!/bin/bash
ls | grep -v '\.' > rmf && rm $(<rmf)
