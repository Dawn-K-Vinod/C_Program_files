# simple calculator
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2

echo "
1. Addition
2. Subtraction
3. Multiplication
4. Division
"
echo "Enter your choice(1,2,3,4): "
read choice

case $choice in 
	1)result=$((num1+num2))
	echo "Sum: $result";;
	
	2)result=$((num1 - num2 ))
	echo "Difference: $result";;
	
	3)result=$(( num1 * num2 ))
	echo "Product: $result";;
	
	4)if [ $num2 -ne 0 ]
	then 
		result=$((num1 / num2 ))
		echo "Quotient: $result"
	else
		echo "Number cannot be divide with zero!"
	fi;;
	
	*) echo "Invalid input!"

esac
	
