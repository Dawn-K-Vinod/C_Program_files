# Natural numbers from 1 to n
echo "Enter a number to display natural numbers upto that numbers:"
read n
echo " "
i=1
while [ $i -le $n ]
do 
	echo "$i "
	i=$((i + 1))
done
