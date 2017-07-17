void a(){
}

int netlock;

void _rw_enter_write(int n){
}

void _rw_exit_write(int n){
}

void c(){
 _rw_enter_write(netlock);
 a();
 _rw_exit_write(netlock);
}


void b(){
 a();
}

void pointer(){
 a;
 b;
 c;
}
