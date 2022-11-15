Class {
	#name : #HerenciaClaseTest,
	#superclass : #TestCase,
	#category : #'HerenciaClase-Tests'
}

{ #category : #'as yet unclassified' }
HerenciaClaseTest >> testEdad [
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
			
	|p|
	p := Persona new.
	self assert: p edad equals: 0.
]

{ #category : #'as yet unclassified' }
HerenciaClaseTest >> testInitPerson [
	"comment statting purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
			
	|p|
	p := Persona new.
	self assert: p name equals: 'name'
	
	
]

{ #category : #tests }
HerenciaClaseTest >> testSetters [
	|p|.
	p := Persona new.
	p name: 'newName'.
	p edad: 20.
	
	self assert: p name equals: 'newName'.
	self assert: p edad equals: 20.
]
