Class {
	#name : #TestCliente,
	#superclass : #TestCase,
	#category : #'HerenciaClase-Tests'
}

{ #category : #tests }
TestCliente >> testCliente [
	|c|
	c := Cliente new.
	self assert: c dinero equals: 0. 
	c dinero: 1000.
	self assert: c dinero equals: 1000.
	self assert: c name equals: 'name'.
	self assert: c edad equals: 0. 
			
	
]

{ #category : #tests }
TestCliente >> testHablar [
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	|hablo|
	hablo := (Cliente new) hablar.
	
	self assert: hablo equals: 'soy una persona y cliente'.
]
