program l12;
var mas:array [1..3,1..3] of integer;
i, j, S1,S2:integer;
begin
randomize;
write('Массив');
S1:=0; 
S2:=0;
writeln();
for i:=1 to 3 do begin
for j:=1 to 3 do begin
mas[i,j]:=random(100);
write(mas[i,j], ' ');
end;
writeln();
end;
for i:=1 to 3 do
begin
S1:= S1 + mas[i,i];
S2:= S2+ mas[i,4-i];
end;
writeln();
writeln('Сумма элементов главной диагонали = ',S1);
writeln();
writeln('Сумма элементов побочной диагонали = ',S2);
readln();
end. 
 
