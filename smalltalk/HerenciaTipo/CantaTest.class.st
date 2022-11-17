Class {
	#name : #CantaTest,
	#superclass : #TestCase,
	#category : #HerenciaTipo
}

{ #category : #'as yet unclassified' }
CantaTest >> cantaTest: objetoCanta [
	^ objetoCanta cantar.
		
]

{ #category : #tests }
CantaTest >> testCantaPolimorfismo [
	self assert: (self cantaTest: (Cantante new)) equals: 'el cantante esta cantando'.
	self assert: (self cantaTest: (Pajaro new)) equals: 'el pajaro esta cantando'.
]
