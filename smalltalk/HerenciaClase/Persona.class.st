Class {
	#name : #Persona,
	#superclass : #Object,
	#instVars : [
		'edad',
		'nombre',
		'name'
	],
	#category : #HerenciaClase
}

{ #category : #accessing }
Persona >> edad [
	^ edad
]

{ #category : #accessing }
Persona >> edad: aedad [

	edad := aedad.
]

{ #category : #accessing }
Persona >> hablar [
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	Transcript show: 'soy una persona' ; cr .	
	^ 'soy una persona'.	
]

{ #category : #initialization }
Persona >> initialize [ 
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	name := 'name'.
	edad := 0.
]

{ #category : #accessing }
Persona >> name [
	^ name.
]

{ #category : #accessing }
Persona >> name: aname [
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	name := aname.
	
]
