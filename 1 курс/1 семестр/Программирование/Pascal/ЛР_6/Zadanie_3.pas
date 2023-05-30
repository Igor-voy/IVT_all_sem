program l6;
var mas: array [1..10] of integer;
i, a:integer;
begin
writeln('¬ведите элементы массива');
for i:=1 to 10 do 
begin
read(mas[i]);
end;
writeln();
i:=1;
writeln('»змененный массив');
while i<=9 do
begin
a:=mas[i];
mas[i]:=mas[i+1];
mas[i+1]:=a;
write(mas[i],' ',mas[i+1],' ');
i:=i+2;
end;
writeln();
readln();
end.