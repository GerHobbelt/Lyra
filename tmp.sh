#! /bin/bash

fn=$( basename "$1" .cpp )

cat > tmp <<EOF
s/#if defined(BUILD_MONOLITHIC) && !defined(main)/\
#if defined(OVERRIDE_MAIN_F)\n\
#define main OVERRIDE_MAIN_F\n\
#elif defined(BUILD_MONOLITHIC)/
EOF

cat tmp

sed -i -f tmp    "$1"
