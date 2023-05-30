program l11;
var A, i, S:integer;
function fact(n:integer):integer;
var u, fa:integer;
begin
fa:=1;
for u:= 1 to n do
fa:=fa*u;
fact:=fa;
end;
begin
writeln('Введите число A');
readln(A);
writeln('Слагаемые');
S:=0;
i:=1;
while S<=A do begin
S:=S+fact(i);
write(fact(i), ' ');
i:=i+1;
end;
writeln();
write('Сумма = ', S);
readln()
end.



