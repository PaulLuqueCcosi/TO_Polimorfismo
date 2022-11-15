Class {
	#name : #TestEmpleadoInit,
	#superclass : #TestCase,
	#category : #'HerenciaClase-Tests'
}

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
