program l12;
var mas:array [1..3,1..3] of integer;
i, j:integer;
begin
randomize;
write ('Массив');
writeln();
for i:=1 to 3 do begin
for j:=1 to 3 do begin
mas[i,j]:=random(100);
write(mas[i,j], ' ');
end;
writeln();
end;
for i:=2 to 3 do
begin
for j:=1 to 1 do
mas[i,j]:=0;
end;
mas[3,2]:=0;
writeln();
write ('Измененный масив');
writeln();
for i:=1 to 3 do begin
for j:=1 to 3 do begin
write(mas[i,j], ' ');
end;
writeln();
end;
readln();
end.  
