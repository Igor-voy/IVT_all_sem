program l6;
var
A:array [1..5] of integer;
B:array [1..5] of integer;
C:array [1..10] of integer;
i:integer;
begin
randomize;
write('A: ');
for i:=1 to 5 do begin
A[i]:= random(100);
write(A[i], ' ');
end;
writeln();
write ('B: ');
for i:=1 to 5 do begin
B[i]:= random(100);
write(B[i], ' ');
end;
writeln();
write ('C: ');
for i:=1 to 5 do
begin
C[i]:= A[i];
C[i+5]:= B[i];
end;
for i:=1 to 10 do
write(C[i],' ');
readln();
end.  