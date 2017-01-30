void call_c();

void a(){
  call_c();
}

void b(){
 void (*x)(void) = a;
}


void c(){
 a();
}

void call_c(){
 c();
}


void call_a() {
 a();
}

void call_calla_and_c(){
 call_a();
 c();
}

void d(){
 void (*x)(void) = a;
 b();
}

void (*funcsarray[])(void) = {a, b, c, d}
