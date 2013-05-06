#!/bin/sh
find . -name '*.cpp'|sed -e 's/\.cpp$//g'|xargs
