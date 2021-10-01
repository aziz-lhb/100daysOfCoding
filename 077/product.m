%Calculating the product of two integers using only the addition operation '+'
a = input('Enter the "A" value: ');
b = input('Enter the "B" value: ');
x = 0;
for i = 1:b
  x = x + a;
end

fprintf('The product of A and B is: %d', x);