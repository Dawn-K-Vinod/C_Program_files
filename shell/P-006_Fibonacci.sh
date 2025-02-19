# Fibonacci series
echo "Enter the number to print fibonacci series upto nth fibonacci number: "
read n

num1=0
num2=1
sum=1

echo " "
echo "Fibonacci series:"
for ((i=0;i<n;i++))
do
	echo "$sum"
	sum=$((num1+num2))
	num1=$num2
	num2=$sum
done
