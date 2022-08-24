i=1
while [ $i -eq 1 ]
do 
    echo enter the 1st operand
    read f1
    echo enter the 2nd operand
    read f2 
    echo -e "1.add\t2.sub\t3.mul\t4.div"
    read op 
    case $op in 
    1) echo $f1 + $f2 = $((f1 + f2));;
    2) echo $f1 - $f2 = $((f1 - f2));;
    3) echo $f1 "*" $f2 = $((f1 * f2));;
    4) echo $f1 / $f2 = $((f1 / f2));;
    esac
    echo if u want to continue press 1 else 0 
    read i
done