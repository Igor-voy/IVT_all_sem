program l4;
var y, s, m, x, n, i, f, l, k, u, o:double;
function factorial(f:double):double;
begin
f:=1;
while l <= n do
begin
f:=f*l;
l:=l+1;
end;
end;
function st(k, u, o:double):double;
begin
st:=k*u+o;
end;
begin
x:=1;
n:=5;
s:=0;
while i<=n do
begin
m:=st(1, i, 1);
s:=s+((1/factorial(m))*(power(x,st(2, i, 1))/(st(2, i, 1))));
i:=i+1;
end;
y:=s/(5.5+x*x+factorial(3*n));
writeln('Результат вычисления =', y:3:9);
end.