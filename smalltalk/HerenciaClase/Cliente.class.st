Class {
	#name : #Cliente,
	#superclass : #Persona,
	#instVars : [
		'dinero'
	],
	#category : #HerenciaClase
}

{ #category : #accessing }
Cliente >> dinero [
	^ dinero
]

{ #category : #accessing }
Cliente >> dinero: anInteger [ 
	dinero := anInteger
]

{ #category : #accessing }
Cliente >> hablar [ 
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	^ 'soy una persona y cliente'
]

{ #category : #initialization }
Cliente >> initialize [ 
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	super initialize.
	dinero := 0.
]
