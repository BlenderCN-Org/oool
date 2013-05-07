#!/bin/sh
find . -name '*.cpp' -and -not -name "*flymake*"|sed -e 's/\.cpp$//g'|xargs
