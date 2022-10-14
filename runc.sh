#!/bin/bash

#    chmod +x runc.sh
#    ./runc.sh

#     Create the build directory 'target' if it is not present
# mkdir code/testbed/target && \
# cd code/testbed/target

cd code/ && \
cd testbed/ && \
cd target/ && \
cmake -G "Unix Makefiles" .. && \

# [Fish:]
# make -j (nproc)
# [Bash:] // https://stackoverflow.com/questions/15289250/using-make-with-j4-or-j8

make -j $(nproc) && \
./testbed && \

cargo run && \

cd .. && \
cd .. && \
cd .. \
