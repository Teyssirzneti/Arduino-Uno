// Lampu Jalur 1
#define MERAH1 13
#define KUNING1 12
#define HIJAU1 11

// Lampu Jalur 2
#define MERAH2 10
#define KUNING2 9
#define HIJAU2 8

// Lampu Jalur 3
#define MERAH3 7
#define KUNING3 6
#define HIJAU3 5

// Lampu Jalur 4
#define MERAH4 4
#define KUNING4 3
#define HIJAU4 2

void setup() {
  pinMode(MERAH1, OUTPUT);
  pinMode(KUNING1, OUTPUT);
  pinMode(HIJAU1, OUTPUT);

  pinMode(MERAH2, OUTPUT);
  pinMode(KUNING2, OUTPUT);
  pinMode(HIJAU2, OUTPUT);

  pinMode(MERAH3, OUTPUT);
  pinMode(KUNING3, OUTPUT);
  pinMode(HIJAU3, OUTPUT);

  pinMode(MERAH4, OUTPUT);
  pinMode(KUNING4, OUTPUT);
  pinMode(HIJAU4, OUTPUT);
}

void loop() {
  //TF Jalur 1
  digitalWrite(MERAH1, HIGH);  
  delay(60000); 
  digitalWrite(MERAH1, LOW);  
  delay(100);    
  digitalWrite(KUNING1, HIGH);  
  delay(3000);   
  digitalWrite(KUNING1, LOW);  
  delay(100);    
  digitalWrite(HIJAU1, HIGH);  
  delay(45000);           
  digitalWrite(HIJAU1, LOW);  
  delay(100);   

  //TF Jalur 2
  digitalWrite(MERAH2, HIGH);  
  delay(55000); 
  digitalWrite(MERAH2, LOW);  
  delay(100);    
  digitalWrite(KUNING2, HIGH);  
  delay(3000);   
  digitalWrite(KUNING2, LOW);  
  delay(100);    
  digitalWrite(HIJAU2, HIGH);  
  delay(50000);           
  digitalWrite(HIJAU2, LOW);  
  delay(100);   

  //TF Jalur 3
  digitalWrite(MERAH3, HIGH);  
  delay(45000); 
  digitalWrite(MERAH3, LOW);  
  delay(100);    
  digitalWrite(KUNING3, HIGH);  
  delay(3000);   
  digitalWrite(KUNING3, LOW);  
  delay(100);    
  digitalWrite(HIJAU3, HIGH);  
  delay(60000);           
  digitalWrite(HIJAU3, LOW);  
  delay(100);   

  //TF Jalur 4
  digitalWrite(MERAH4, HIGH);  
  delay(40000); 
  digitalWrite(MERAH4, LOW);  
  delay(100);    
  digitalWrite(KUNING4, HIGH);  
  delay(3000);   
  digitalWrite(KUNING4, LOW);  
  delay(100);    
  digitalWrite(HIJAU4, HIGH);  
  delay(65000);           
  digitalWrite(HIJAU4, LOW);  
  delay(100);   
}
