# 🎯 Points, Complexes et Quaternions

Ce projet est une bibliothèque développée en C++ permettant de manipuler des entités mathématiques dans différents espaces : le plan 2D (points et nombres complexes) et l'espace 3D/4D (quaternions).

## 🚀 À propos du projet
L'objectif de ce dépôt est de fournir une implémentation propre et intuitive pour :
- Manipuler des points dans un espace cartésien.
- Effectuer des opérations sur les nombres complexes (addition, multiplication, conjugué, module).
- Utiliser les quaternions, notamment pour représenter des rotations dans l'espace 3D.

## 🛠 Fonctionnalités
1. Nombres Complexes
- Représentation sous forme algébrique $(a + bi)$.
- Calcul du module et du conjugué.
- Opérations arithmétiques de base.

2. Quaternions
- Représentation sous la forme $q = w + xi + yj + zk$.
- Produit de Hamilton.
- Normalisation et calcul de l'inverse.

## 📁️ Structure de projet

---

```text
PointComplexeQuternion/
├── Complexe
│   ├── complexe
│   ├── complexe.cpp 
│   └── complexe.hpp		
├── Point
│   ├── point
│   ├── point.cpp		
│   └── point.hpp
├── Quaternion
│   ├── quaternions
│   ├── quaternions_algebra.cpp
│   └── quaternions_algebra.hpp
└── README.md
```

---

## 📋 Prérequis 
le projet utilise C++.

## 💻 Installation et utilisation 
1. Cloner le dépôt 
```bash
git clone https://github.com/TifaniohMF/PointComplexeQuaternion.git
```

2. Compiler et exécuter les tests :
```bash
g++ -o test test.cpp Complexe/complexe.cpp Point/point.cpp Quaternion/quaternions_algebra.cpp
./test
```

3. Exemples d'utilisation individuelle :
- Pour les complexes : `g++ -o complexe Complexe/complexe.cpp && ./complexe`
- Pour les points : `g++ -o point Point/point.cpp && ./point`
- Pour les quaternions : `g++ -o quaternion Quaternion/quaternions_algebra.cpp && ./quaternion`

## 📐 Notions Mathématiques utilisées

- **Complexe** : $z = x + iy$ où $i^{2} = -1$.
- **Quaternion** : $q = w + xi + yj + zk$ où $i^{2} = j^{2} = k^{2} = ijk = -1$.
- **Rotation** : Utilisation de la formule $v^{'} = q \cdot v \cdot q^{-1}$

## 🤝 Contribution
Si vous souhaitez améliorer les performances des calculs ou ajouter des visualisations graphiques :
1. Forkez le dépôt.
2. Créez une branche dédiée 
```bash
git checkout -b feature/AmeliorationMaths
```
3. Proposez une Pull Request.

Auteur : [TifaniohMF](https://github.com/TifaniohMF)
