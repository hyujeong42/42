cat /etc/passwd | grep  -v "#" | awk 'NR%2==0' | sed 's/\:.*//g' | rev | sort -r  | awk "$FT_LINE1 <= NR && NR <= $FT_LINE2" | tr '\n' ' '| sed 's/ /, /g' | sed 's/, $/./' | tr -d '\n' 
