program l6;
var mas:array [1..11] of integer;
i,sum:integer;
sred:real;
begin
randomize;
sum:=0;
for i:=1 to 11 do begin
mas[i]:= random(100);
write(mas[i],' ');
sum:=sum+mas[i];
end;
sred:=sum/11;
writeln();
writeln ('Сумма элементов массива: ', sum);
writeln ('Среднее арифметическое элементов массива: ', sred:2:4);
readln();
end.   