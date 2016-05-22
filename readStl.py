#!/usr/bin/python
# UJAS SIDAPARA 2013:
# Render STL point cloude


import vtk
import tkFileDialog

# Create the reader and read a data file.  Connect the mapper and
# actor.

#find stl file path
filename = tkFileDialog.askopenfilename()

sr = vtk.vtkSTLReader()
sr.SetFileName(filename)

stlMapper = vtk.vtkPolyDataMapper()
stlMapper.SetInputConnection(sr.GetOutputPort())

stlActor = vtk.vtkLODActor()
stlActor.SetMapper(stlMapper)

# Create the Renderer, RenderWindow, and RenderWindowInteractor
ren = vtk.vtkRenderer()
renWin = vtk.vtkRenderWindow()
renWin.AddRenderer(ren)
iren = vtk.vtkRenderWindowInteractor()
iren.SetRenderWindow(renWin)

# Add the actors to the render; set the background and size
ren.AddActor(stlActor)
ren.SetBackground(0.1, 0.2, 0.4)
renWin.SetSize(500, 500)

# Zoom in closer
ren.ResetCamera()
cam1 = ren.GetActiveCamera()
cam1.Zoom(1.4)

iren.Initialize()
renWin.Render()
iren.Start()
