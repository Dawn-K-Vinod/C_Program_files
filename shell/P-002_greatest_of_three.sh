#Largest of three numbers
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
echo "Enter third number:"
read num3
echo " "

if [ $num1 -gt $num2 ] 
then
	if [ $num1 -gt $num3 ] 
	then
		echo "$num1 is the largest number."
	else 
		echo "$num3 is the largest number."
	fi
else 
	if [ $num2 -gt $num3 ] 
	then 
		echo "$num2 is the largest number."
	else
		echo "$num3 is the largest number."
	fi
fi
