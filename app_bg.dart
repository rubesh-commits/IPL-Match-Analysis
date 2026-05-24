import 'package:flutter/material.dart';

class AppBackground extends StatelessWidget {

  final Widget child;

  const AppBackground({
    super.key,
    required this.child,
  });

  @override
  Widget build(BuildContext context) {

    return Container(

      decoration: const BoxDecoration(

        gradient: LinearGradient(

          colors: [
            Color(0xFFEEF2FF),
            Color(0xFFDDEBFF),
          ],

          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
      ),

      child: child,
    );
  }
}