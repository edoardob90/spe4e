#ifndef __MATERIAL_POINT__HH__
#define __MATERIAL_POINT__HH__

/* -------------------------------------------------------------------------- */
#include "particle.hh"

//! Class for MaterialPoint
class MaterialPoint : public Particle {
  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  void printself(std::ostream& stream) const override;
  void initself(std::istream& sstr) override;

  Real & getTemperature(){return temperature;};
  Real & getHeatRate(){return heat_rate;};
  bool & isBoundary(){return is_boundary;};

  void setTemperature(const Real& new_temperature);
  void setHeatRate(const Real& new_heat_rate);
  
private:
  Real temperature;
  Real heat_rate;
  bool is_boundary;
};

/* -------------------------------------------------------------------------- */
#endif  //__MATERIAL_POINT__HH__
