// Author
//Seyed Mohsen Etesami setesami@cern.ch
#include "SimG4CMS/PPS/interface/PPSDiamondG4Hit.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"

#include <iostream>

PPSDiamondG4Hit::PPSDiamondG4Hit() : entry_(0), exit_(0), local_entry_(0), local_exit_(0) {
  theIncidentEnergy_ = 0.0;
  theTrackID_ = -1;
  theUnitID_ = 0;
  theTimeSlice_ = 0.0;
  theGlobaltimehit_ = 0.0;
  theX_ = 0.0;
  theY_ = 0.0;
  theZ_ = 0.0;
  thePabs_ = 0.0;
  theTof_ = 0.0;
  theEnergyLoss_ = 0.0;
  theParticleType_ = 0;
  theParentId_ = 0;
  theVx_ = 0.0;
  theVy_ = 0.0;
  theVz_ = 0.0;
  thePx_ = thePy_ = thePz_ = 0.0;
  theThetaAtEntry_ = 0;
  thePhiAtEntry_ = 0;
}

PPSDiamondG4Hit::~PPSDiamondG4Hit() {}

PPSDiamondG4Hit::PPSDiamondG4Hit(const PPSDiamondG4Hit& right) {
  entry_ = right.entry_;
  exit_ = right.exit_;
  local_entry_ = right.local_entry_;
  local_exit_ = right.local_exit_;
  theIncidentEnergy_ = right.theIncidentEnergy_;
  theTrackID_ = right.theTrackID_;
  theUnitID_ = right.theUnitID_;
  theTimeSlice_ = right.theTimeSlice_;
  theGlobaltimehit_ = right.theGlobaltimehit_;
  theX_ = right.theX_;
  theY_ = right.theY_;
  theZ_ = right.theZ_;
  thePabs_ = right.thePabs_;
  theTof_ = right.theTof_;
  theEnergyLoss_ = right.theEnergyLoss_;
  theParticleType_ = right.theParticleType_;
  theParentId_ = right.theParentId_;
  theVx_ = right.theVx_;
  theVy_ = right.theVy_;
  theVz_ = right.theVz_;
  thePx_ = right.thePx_;
  thePy_ = right.thePy_;
  thePz_ = right.thePz_;
  theThetaAtEntry_ = right.theThetaAtEntry_;
  thePhiAtEntry_ = right.thePhiAtEntry_;
}

const PPSDiamondG4Hit& PPSDiamondG4Hit::operator=(const PPSDiamondG4Hit& right) {
  entry_ = right.entry_;
  exit_ = right.exit_;
  local_entry_ = right.local_entry_;
  local_exit_ = right.local_exit_;
  theIncidentEnergy_ = right.theIncidentEnergy_;
  theTrackID_ = right.theTrackID_;
  theUnitID_ = right.theUnitID_;
  theTimeSlice_ = right.theTimeSlice_;
  theGlobaltimehit_ = right.theGlobaltimehit_;
  theX_ = right.theX_;
  theY_ = right.theY_;
  theZ_ = right.theZ_;
  thePabs_ = right.thePabs_;
  theTof_ = right.theTof_;
  theEnergyLoss_ = right.theEnergyLoss_;
  theParticleType_ = right.theParticleType_;
  theParentId_ = right.theParentId_;
  theVx_ = right.theVx_;
  theVy_ = right.theVy_;
  theVz_ = right.theVz_;
  thePx_ = right.thePx_;
  thePy_ = right.thePy_;
  thePz_ = right.thePz_;
  theThetaAtEntry_ = right.theThetaAtEntry_;
  thePhiAtEntry_ = right.thePhiAtEntry_;

  return *this;
}

void PPSDiamondG4Hit::Print() { edm::LogInfo("PPSSimDiamond") << (*this); }

const G4ThreeVector& PPSDiamondG4Hit::getEntry() const { return entry_; }
void PPSDiamondG4Hit::setEntry(const G4ThreeVector& xyz) { entry_ = xyz; }

const G4ThreeVector& PPSDiamondG4Hit::getExit() const { return exit_; }
void PPSDiamondG4Hit::setExit(const G4ThreeVector& xyz) { exit_ = xyz; }

const G4ThreeVector& PPSDiamondG4Hit::getLocalEntry() const { return local_entry_; }
void PPSDiamondG4Hit::setLocalEntry(const G4ThreeVector& xyz) { local_entry_ = xyz; }
const G4ThreeVector& PPSDiamondG4Hit::getLocalExit() const { return local_exit_; }
void PPSDiamondG4Hit::setLocalExit(const G4ThreeVector& xyz) { local_exit_ = xyz; }

double PPSDiamondG4Hit::getIncidentEnergy() const { return theIncidentEnergy_; }
void PPSDiamondG4Hit::setIncidentEnergy(double e) { theIncidentEnergy_ = e; }

unsigned int PPSDiamondG4Hit::getTrackID() const { return theTrackID_; }
void PPSDiamondG4Hit::setTrackID(int i) { theTrackID_ = i; }

int PPSDiamondG4Hit::getUnitID() const { return theUnitID_; }
void PPSDiamondG4Hit::setUnitID(unsigned int i) { theUnitID_ = i; }

double PPSDiamondG4Hit::getTimeSlice() const { return theTimeSlice_; }
void PPSDiamondG4Hit::setTimeSlice(double d) { theTimeSlice_ = d; }
int PPSDiamondG4Hit::getTimeSliceID() const { return (int)theTimeSlice_; }

double PPSDiamondG4Hit::getPabs() const { return thePabs_; }
double PPSDiamondG4Hit::getTof() const { return theTof_; }
double PPSDiamondG4Hit::getEnergyLoss() const { return theEnergyLoss_; }
int PPSDiamondG4Hit::getParticleType() const { return theParticleType_; }

void PPSDiamondG4Hit::setPabs(double e) { thePabs_ = e; }
void PPSDiamondG4Hit::setTof(double e) { theTof_ = e; }
void PPSDiamondG4Hit::setEnergyLoss(double e) { theEnergyLoss_ = e; }
void PPSDiamondG4Hit::addEnergyLoss(double e) { theEnergyLoss_ += e; }
void PPSDiamondG4Hit::setParticleType(short i) { theParticleType_ = i; }

double PPSDiamondG4Hit::getThetaAtEntry() const { return theThetaAtEntry_; }
double PPSDiamondG4Hit::getPhiAtEntry() const { return thePhiAtEntry_; }

void PPSDiamondG4Hit::setThetaAtEntry(double t) { theThetaAtEntry_ = t; }
void PPSDiamondG4Hit::setPhiAtEntry(double f) { thePhiAtEntry_ = f; }

double PPSDiamondG4Hit::getX() const { return theX_; }
void PPSDiamondG4Hit::setX(double t) { theX_ = t; }

double PPSDiamondG4Hit::getY() const { return theY_; }
void PPSDiamondG4Hit::setY(double t) { theY_ = t; }

double PPSDiamondG4Hit::getZ() const { return theZ_; }
void PPSDiamondG4Hit::setZ(double t) { theZ_ = t; }

int PPSDiamondG4Hit::getParentId() const { return theParentId_; }
void PPSDiamondG4Hit::setParentId(int p) { theParentId_ = p; }

double PPSDiamondG4Hit::getVx() const { return theVx_; }
void PPSDiamondG4Hit::setVx(double t) { theVx_ = t; }

double PPSDiamondG4Hit::getVy() const { return theVy_; }
void PPSDiamondG4Hit::setVy(double t) { theVy_ = t; }

double PPSDiamondG4Hit::getVz() const { return theVz_; }
void PPSDiamondG4Hit::setVz(double t) { theVz_ = t; }

void PPSDiamondG4Hit::setPx(double p) { thePx_ = p; }
void PPSDiamondG4Hit::setPy(double p) { thePy_ = p; }
void PPSDiamondG4Hit::setPz(double p) { thePz_ = p; }

double PPSDiamondG4Hit::getPx() const { return thePx_; }
double PPSDiamondG4Hit::getPy() const { return thePy_; }
double PPSDiamondG4Hit::getPz() const { return thePz_; }

double PPSDiamondG4Hit::getGlobalTimehit() const { return theGlobaltimehit_; }
void PPSDiamondG4Hit::setGlobalTimehit(double h) { theGlobaltimehit_ = h; }

std::ostream& operator<<(std::ostream& os, const PPSDiamondG4Hit& hit) {
  os << " Data of this PPSDiamondG4Hit are:" << std::endl
     << " Time slice ID: " << hit.getTimeSliceID() << std::endl
     << " EnergyDeposit = " << hit.getEnergyLoss() << std::endl
     << " Energy of primary particle (ID = " << hit.getTrackID() << ") = " << hit.getIncidentEnergy() << " (MeV)"
     << "\n"
     << " Local entry and exit points in PPS unit number " << hit.getUnitID() << " are: " << hit.getEntry() << " (mm)"
     << hit.getExit() << " (mm)"
     << "\n"
     << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  return os;
}
