x="12/7+89/20"
s,t=x.split("+")

s_n,s_d=s.split("/")
t_n,t_d=t.split("/")

f_d=(int(s_d))*(int(t_d))
f_n=(f_d/int(s_d))*int(s_n) + (f_d/int(t_d))*int(t_n)

c=10
while(c>0):
	if(f_d%c==0 and f_n%c==0):
		f_d=f_d/c
		f_n=f_n/c
	c=c-1
		
print(str(f_n)+"/"+str(f_d))

#print(f_d,f_n)
#print(s_n,s_d,t_n,t_d)