void a(){
}

int netlock;

void rw_enter_write(int n){
}

void rw_exit_write(int n){
}

void c(){
 rw_enter_write(netlock);
 a();
 rw_exit_write(netlock);
}


void b(){
 a();
}

void pointer(){
 a;
 b;
 c;
}
