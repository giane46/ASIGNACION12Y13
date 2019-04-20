Algoritmo TemaBEjercicio1
	Escribir "Escribir la antiguedad de un trabajador"
	Leer antiguedad
	Escribir "Escrbir sueldo en soles"
	Leer sueldo
	
	Si antiguedad>=1 & antiguedad<=3 Entonces
		bono<-0.04*sueldo
	SiNo
		Si antiguedad>3 & antiguedad<=5 Entonces
			bono<-0.06*sueldo
		SiNo
			Si antiguedad>5 & antiguedad<=10 Entonces
				bono<-0.1*sueldo
			SiNo
				bono<-0.15*sueldo
			Fin Si
		Fin Si
	Fin Si
	
	Escribir "El bono que recibira el trabajador sera: ", bono
FinAlgoritmo
