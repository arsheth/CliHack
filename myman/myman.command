#!/bin/sh --
# myman.command -*- shell-script -*- to run the MyMan video game
# Copyright 2003, 2006-2008, Benjamin C. Wiley Sittler <bsittler@gmail.com>
# 
# Permission is hereby granted, free of charge, to any person
# obtaining a copy of this software and associated documentation
# files (the "Software"), to deal in the Software without
# restriction, including without limitation the rights to use, copy,
# modify, merge, publish, distribute, sublicense, and/or sell copies
# of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
# HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
# WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.


# NOTE: automatically\ generated\ Sat\ Apr\ 16\ 21:10:15\ EDT\ 2016\ for\ myman\ 0.7.1

export MYMAN
MYMAN=myman

export XMYMAN
XMYMAN=xmyman

export SHELL
SHELL=/bin/sh

export EXE_SUFFIX
EXE_SUFFIX=

# special characters
char_tab='	'
char_newline='
'
export char_tab
export char_newline

for myman in myman-0.7.1 myman myman
do
  if test -f "`dirname \"\$0\"`"/"${myman}" -a -x "`dirname \"\$0\"`"/"${myman}" -o -f "`dirname \"\$0\"`"/"${myman}""$EXE_SUFFIX" -a -x "`dirname \"\$0\"`"/"${myman}""$EXE_SUFFIX"
      then
      MYMAN="`dirname \"\$0\"`"/"${myman}"
  elif test -f "`dirname \"\$0\"`"/usr/local/bin/"${myman}" -a -x "`dirname \"\$0\"`"/usr/local/bin/"${myman}" -o -f "`dirname \"\$0\"`"/usr/local/bin/"${myman}""$EXE_SUFFIX" -a -x "`dirname \"\$0\"`"/usr/local/bin/"${myman}""$EXE_SUFFIX"
      then
      MYMAN="`dirname \"\$0\"`"/usr/local/bin/"${myman}"
      break
  elif test -f /usr/local/bin/"${myman}" -a -x /usr/local/bin/"${myman}" -o -f /usr/local/bin/"${myman}""$EXE_SUFFIX" -a -x /usr/local/bin/"${myman}""$EXE_SUFFIX"
      then
      MYMAN=/usr/local/bin/"${myman}"
      break
  elif test -f "`type -p \"\${myman}\"`" -a -x "`type -p \"\${myman}\"`" -o -f "`type -p \"\${myman}\"`""$EXE_SUFFIX" -a -x "`type -p \"\${myman}\"`""$EXE_SUFFIX"
      then
      MYMAN="`type -p \"\${myman}\"`"
      break
  fi
done

for xmyman in xmyman @XMYMAN
do
  if test -f "`dirname \"\$0\"`"/"${xmyman}" -a -x "`dirname \"\$0\"`"/"${xmyman}" -o -f "`dirname \"\$0\"`"/"${xmyman}""$EXE_SUFFIX" -a -x "`dirname \"\$0\"`"/"${xmyman}""$EXE_SUFFIX"
      then
      XMYMAN="`dirname \"\$0\"`"/"${xmyman}"
  elif test -f "`dirname \"\$0\"`"/usr/local/bin/"${xmyman}" -a -x "`dirname \"\$0\"`"/usr/local/bin/"${xmyman}" -o -f "`dirname \"\$0\"`"/usr/local/bin/"${xmyman}""$EXE_SUFFIX" -a -x "`dirname \"\$0\"`"/usr/local/bin/"${xmyman}""$EXE_SUFFIX"
      then
      XMYMAN="`dirname \"\$0\"`"/usr/local/bin/"${xmyman}"
      break
  elif test -f /usr/local/bin/"${xmyman}" -a -x /usr/local/bin/"${xmyman}" -o -f /usr/local/bin/"${xmyman}""$EXE_SUFFIX" -a -x /usr/local/bin/"${xmyman}""$EXE_SUFFIX"
      then
      XMYMAN=/usr/local/bin/"${xmyman}"
      break
  elif test -f "`type -p \"\${xmyman}\"`" -a -x "`type -p \"\${xmyman}\"`" -o -f "`type -p \"\${xmyman}\"`""$EXE_SUFFIX" -a -x "`type -p \"\${xmyman}\"`""$EXE_SUFFIX"
      then
      XMYMAN="`type -p \"\${xmyman}\"`"
      break
  fi
done

# under X11 we use XMyMan
if test :"$DISPLAY" != :""
then
    if test -f "$XMYMAN" -a -x "$XMYMAN" -o -f "`type -p \"\${XMYMAN}\"`" -a -x "`type -p \"\${XMYMAN}\"`"
    then
        exec "$XMYMAN" "$@"
        exit $?
    fi
fi

# first, probe for myman
"$MYMAN" --help >/dev/null || exit $?

# then run it
exec "$MYMAN" "$@"

exit $?
