program l5;
var i, n, b, a, c: integer;
function f(p:integer):integer;
begin
a:=0;
b:=1;
i:=0;
while i<p do begin
c:=a+b;
a:=b;
b:=c;
write(c,' ');
i:=i+1;
end;
end;
begin
writeln('¬ведите число n');
readln(n);
f(n);
readln();
end.