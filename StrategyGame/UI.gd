extends Control

onready var buildingButtons : Node = get_node("BuildingButtons")

onready var foodMetalText : Label = get_node("FoodMetalText")

onready var oxygenEnergyText : Label = get_node("OxygenEnergyText")

onready var curTurnText : Label = get_node("TurnText")

onready var gameManager : Node = get_node("/root/MainScene")

func on_end_turn ():
	
	curTurnText.text = "Turn: " + str(gameManager.curTurn)
	buildingButtons.visible = true

func update_resource_text ():
	
	var foodMetal = ""
	
	foodMetal += str(gameManager.curFood) + " (" + ("+" if gameManager.foodPerTurn >= 0 else "") + str(gameManager.foodPerTurn) + ")\n"
	foodMetal += str(gameManager.curMetal) + " (" + ("+" if gameManager.metalPerTurn >= 0 else "") + str(gameManager.metalPerTurn) + ")"
	
	foodMetalText.text = foodMetal
	
	var oxygenEnergy = ""
	
	oxygenEnergy += str(gameManager.curOxygen) + " (" + ("+" if gameManager.oxygenPerTurn >= 0 else "") + str(gameManager.oxygenPerTurn) + ")\n"
	oxygenEnergy += str(gameManager.curEnergy) + " (" + ("+" if gameManager.energyPerTurn >= 0 else "") + str(gameManager.energyPerTurn) + ")"
	
	oxygenEnergyText.text = oxygenEnergy

func _on_EndTurnButton_pressed():
	
	gameManager.end_turn()

func _on_BaseButton_pressed():
	
	buildingButtons.visible = false
	gameManager.on_select_building(0)

func _on_GreenhouseButton_pressed():
	
	buildingButtons.visible = false
	gameManager.on_select_building(1)

func _on_MineButton_pressed():
	
	buildingButtons.visible = false
	gameManager.on_select_building(2)

func _on_OxygenFarmButton_pressed():
	
	buildingButtons.visible = false
	gameManager.on_select_building(3)

func _on_SolarPanelButton_pressed():
	
	buildingButtons.visible = false
	gameManager.on_select_building(4)
