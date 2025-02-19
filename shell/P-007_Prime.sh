# Prime numbers
echo "Enter the number to print prime numbers upto that number:"
read  n

echo " "
echo "Prime numbers upto $n:"
echo "2"
for ((i=3;i<n;i+=2))
do
	flag=1
	for ((j=2;j<i;j++))
	do 
		if  [ $((i%j)) -eq 0 ]
		then
			flag=0
			break
		fi
	done
	
	if [ $flag -eq 1 ]
	then
		echo "$i"
	fi
done
