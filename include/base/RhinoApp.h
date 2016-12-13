#ifndef RHINOAPP_H
#define RHINOAPP_H

#include "MooseApp.h"

class RhinoApp;

template<>
InputParameters validParams<RhinoApp>();

class RhinoApp : public MooseApp
{
public:
  RhinoApp(InputParameters parameters);
  virtual ~RhinoApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* RHINOAPP_H */
