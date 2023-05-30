program l12;
const mas:array [1..3,1..3] of integer = ((10,5,6),(5,2,0),(15,4,3));
var i, j, S, max:integer;
begin
writeln('Массив');
S:=0;
for i:=1 to 3 do
begin
for j:=1 to 3 do 
begin
write(mas[i,j], ' ');
S:=S+mas[i,j];
end;
writeln();
end;
max:= mas[1,1];
for i:=1 to 3 do
for j:=1 to 3 do
if mas[i,j] > max then
max:= mas[i,j];
writeln();
writeln('Сумма элементов массива = ', S);
writeln('Максимальный элемент = ',max);
readln();
end.  
