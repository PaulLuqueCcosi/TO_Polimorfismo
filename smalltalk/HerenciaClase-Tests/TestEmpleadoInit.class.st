Class {
	#name : #TestEmpleadoInit,
	#superclass : #TestCase,
	#category : #'HerenciaClase-Tests'
}

{ #category : #tests }
TestEmpleadoInit >> testHablar [
	"comment stating purpose of instance-side method"
	"scope: class-variables  &  instance-variables"	
	|hablo|
	hablo := (Empleado new) hablar.
	
	self assert: hablo equals: 'soy una persona y empleado'.
]

{ #category : #tests }
TestEmpleadoInit >> testInitialEmpleado [

	|e|
	e := Empleado new.
	self assert: e name equals: 'name'.
	self assert: e edad equals: 0.
	self assert: e salario equals: 0.   
]

{ #category : #tests }
TestEmpleadoInit >> testInstanceEmpleado [
	|e|.
	e := Empleado new.
	e salario: 2000.
	e name: 'nuevoName'.
	self assert: e name equals: 'nuevoName'.
	self assert: e salario equals: 2000 
]
