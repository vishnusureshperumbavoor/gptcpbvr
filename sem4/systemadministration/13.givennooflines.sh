if [ $# -ne 3 ]
then 
echo need 3 arguements
else
        if [ -e $3 ]
        then 
        tail +$1 $3 | head -n $2 
        else 
        echo file doesnt exits 
        fi
fi 
