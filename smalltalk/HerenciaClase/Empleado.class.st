Class {
	#name : #Empleado,
	#superclass : #Persona,
	#instVars : [
		'salario'
	],
	#category : #HerenciaClase
}

{ #category : #initialization }
Empleado >> initialize [ 
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	super initialize.
	salario := 0.
]

{ #category : #accessing }
Empleado >> salario [
	^ salario
]

{ #category : #accessing }
Empleado >> salario: anInteger [ 
	salario := anInteger
]
