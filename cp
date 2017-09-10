#!/bin/bash

cat "$1"
echo

if [[ $2 != "" ]]; then
cp "$1" "../pictalk/client/src/atoms/Icons/$2.rsvg"
else
cp "$1" "../pictalk/client/src/atoms/Icons/$(printf '%s' "$1" | sed 's/.svg/.rsvg/')"
fi
