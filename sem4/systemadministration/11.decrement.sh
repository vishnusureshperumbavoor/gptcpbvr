echo enter a number
read a
while [ $a -ge 0 ]
do 
	echo $a
	a=$((a - 1))
done
